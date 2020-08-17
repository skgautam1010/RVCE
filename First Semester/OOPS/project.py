import numpy as np
import tensorflow as tf
from tensorflow.keras.preprocessing import image
import cv2
import matplotlib.pyplot as plt

class Cat_Dog:

    def __init__(self):
        pass

    def preprocess_img(self, path):
        input_img = image.load_img(path,target_size = (150, 150))
        input_img = image.img_to_array(input_img)
        input_img = np.expand_dims(input_img, axis = 0)
        input_img /= 255
        return input_img


    def get_prediction(self, path):
        processed_img = self.preprocess_img(path)
        model = tf.keras.models.load_model('cat_dog_100epochs.h5')
        result = model.predict_classes(processed_img)
        
        if result.max() == 1:
            print('\n\nIts a dog!\n\n')
            
        else:
            print('\n\nIts a cat!\n\n')



class Hsv:
    
    def __init__(self):
        pass
    
    def nothing(self,x):
        pass
    
    def run(self):
        cap = cv2.VideoCapture(0)
        cv2.namedWindow('Trackbars')

        cv2.createTrackbar('L - H', 'Trackbars', 0,255,self.nothing)
        cv2.createTrackbar('L - S', 'Trackbars', 0,255,self.nothing)
        cv2.createTrackbar('L - V', 'Trackbars', 0,255,self.nothing)
        cv2.createTrackbar('U - H', 'Trackbars', 179,179,self.nothing)
        cv2.createTrackbar('U - S', 'Trackbars', 255,255,self.nothing)
        cv2.createTrackbar('U - V', 'Trackbars', 255,255,self.nothing)

        while cap.isOpened():

            ret, frame = cap.read()

            hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)#hue saturation value

            l_h = cv2.getTrackbarPos('L - H', 'Trackbars')
            l_s = cv2.getTrackbarPos('L - S', 'Trackbars')
            l_v = cv2.getTrackbarPos('L - V', 'Trackbars')
            u_h = cv2.getTrackbarPos('U - H', 'Trackbars')
            u_s = cv2.getTrackbarPos('U - S', 'Trackbars')
            u_v = cv2.getTrackbarPos('U - V', 'Trackbars')

            lower_limit = np.array([l_h,l_s,l_v])
            upper_limit = np.array([u_h,u_s,u_v])

            mask = cv2.inRange(frame, lower_limit, upper_limit)
            result = cv2.bitwise_and(frame,frame,mask = mask)

            cv2.imshow('Mask', mask)
            cv2.imshow('Result', result)
            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

        cap.release()
        cv2.destroyAllWindows()
        
    
class Cat_Dog_Feature:
   
    minX = 0
    maxX = 150

    minY = 0
    maxY = 150

    cat_prob = []
    dog_prob = []
    
    tempXmin, tempYmin, tempXmax, tempYmax = 0, 0, 0, 0
    temp = 0.0
        
    def __init__(self):
      pass

      
    def process_img(self, img):

        self.processed_img = np.expand_dims(img, axis = 0)
        self.processed_img = self.processed_img/255
        
        return self.processed_img
    
    def detect_features(self, path):
        self.sample_img = plt.imread(path)
        
        self.model = tf.keras.models.load_model("cat_dog_100epochs.h5")
        
        #self.tempXmin, self.tempYmin, self.tempXmax, self.tempYmax = 0, 0, 0, 0
        
        #self.temp = 0.0
        
        while self.maxY <= self.sample_img.shape[1]: 

            while self.maxX <= self.sample_img.shape[0]:
               
                roi = self.sample_img[self.minX : self.maxX, self.minY : self.maxY]
                
                #plt.imshow(roi)
                #plt.show()
                
                new_roi = self.process_img(roi)

                predicted_class = self.model.predict_classes(new_roi)
                prob = self.model.predict(new_roi)
                
                if self.temp < prob :
                    
                    self.temp = prob;
                    
                    self.tempXmin = self.minX
                    self.tempYmin = self.minY
                    self.tempXmax = self.maxX
                    self.tempYmax = self.maxY

                if predicted_class.max() == 0:
                   self.cat_prob.append(prob.max())
                   print(f"CAT : {prob}")

                elif predicted_class.max() == 1:
                   self.dog_prob.append(prob.max())
                   print(f"DOG : {prob}")
                    
                print(f'minX = {self.minX} & maxX={self.maxX}')
                print(f'minY = {self.minY} & minY={self.minY}\n\n')
               # print(f'probability : {prob}')
        
#                 self.minX = self.maxX
#                 self.maxX += 150
                
                self.minX += 50
                self.maxX += 50
        

            self.minX = 0
            self.maxX = 150

#             self.minY = self.maxY
#             self.maxY += 150

            self.minY += 50
            self.maxY += 50

        if sum(self.cat_prob) > sum(self.dog_prob):
            print("\n\nI see a cat undoubtedly!\n\n")
        else:
            print("\n\nI see a dog more clearly!\n\n")
        
        print(f'Max Probability Region Coordinates follows')
        
        print(f'tempXmin = {self.tempXmin}, tempYmin = {self.tempYmin}')
        print(f'tempXmax = {self.tempXmax}, tempYmax = {self.tempYmax}')  
        print(f'Max Probability = {self.temp}')
        
        print(f'Total Cat Probability : {sum(self.cat_prob)}')
        print(f'Total Dog Probability : {sum(self.dog_prob)}\n\n')
        
        #pic = cv2.imread(path, cv2.COLOR_BGR2RGB)
        #bounded_pic = cv2.rectangle(pic, (self.tempXmin, self.tempYmin), (self.tempXmax, self.tempYmax), (80, 220, 100), 3)
        
        #plt.imshow(bounded_pic)
        #plt.show()




class Template_match_detector:
    
    def __init__(self):
        pass
    
    def match_template(self, image_path, roi_path):
        
        sample_image = cv2.imread(image_path)
        sample_image = cv2.cvtColor(sample_image, cv2.COLOR_BGR2RGB)
        
        sample_image_copy = sample_image.copy()
        
        template = cv2.imread(roi_path)
        template = cv2.cvtColor(template, cv2.COLOR_BGR2RGB)
        
        height, width, channels = template.shape
        
        result = cv2.matchTemplate(sample_image_copy, template, cv2.TM_CCOEFF_NORMED)
        
        min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(result)
        
        top_left = max_loc
        
        bottom_right = (top_left[0] + width, top_left[1] + height)
        
        cv2.rectangle(sample_image_copy,top_left, bottom_right, 255, 10)
        
        while True :
            cv2.imshow("Original Image", sample_image)
            cv2.imshow("Template Match", sample_image_copy)
        
            if cv2.waitKey(1) == 27:
                break
                
        cv2.destroyAllWindows()
        
class Live_Template_Detector:
    
    def __init__(self):
        pass

    def detectObject(self, path):
        
        template = cv2.imread(path)

        #template = cv2.cvtColor(face, cv2.COLOR_BGR2RGB)

        cap = cv2.VideoCapture(0)

        while cap.isOpened():
            ret, frame = cap.read()

            frame_copy = frame.copy()

            #frame_copy = cv2.cvtColor(frame_copy, cv2.COLOR_BGR2RGB)

           # res = cv2.matchTemplate(frame_copy, face, cv2.TM_CCOEFF)
            res = cv2.matchTemplate(frame_copy, template, cv2.TM_CCOEFF_NORMED) #better
           # res = cv2.matchTemplate(frame_copy, face, cv2.TM_CCORR)
           # res = cv2.matchTemplate(frame_copy, face, cv2.TM_CCORR_NORMED)

            (min_val, max_val, min_val_loc, max_val_loc) = cv2.minMaxLoc(res)

            top_left = max_val_loc

            height, width, channels = template.shape

            bottom_right = (top_left[0]+width, top_left[1]+height)

            cv2.rectangle(frame_copy, top_left, bottom_right, (255, 0, 0), 5)

            cv2.imshow('_', frame_copy)

            #cv2.imshow('_', res)

            key = cv2.waitKey(1)

            if(key == 27):
                break

        cap.release()
        cv2.destroyAllWindows()


        
        
option = 1
while option!=6:
    
    print('1.CAT-DOG Classifier')
    print('2.HSV-Color Object Detection')
    print('3.CAT-DOG Feature Detection')
    print('4.Template Matching')
    print('5.Live Video Template Matching')
    #print('6.Cat-Dog-Live-Video-Recognition')
    print('6.Exit')
    
    print('\n\nChoose any option:')
    
    option = int(input())
    
    while True:
        if option == 1:
            print('Enter the path of any cat or dog image with forward slashes:')
            path = input('')
            
            cat_dog_classifier = Cat_Dog()
            cat_dog_classifier.get_prediction(path)
            
            break
            
        elif option == 2:
            hsv_object_detection = Hsv()
            hsv_object_detection.run()
            break
            
        elif option == 3:
            print('Enter the path of the image:')
            path = input('')
            feature_detector = Cat_Dog_Feature()
            feature_detector.detect_features(path)
            break
            
        elif option == 4:
            image_path = input('Enter the path of the image : ')
            roi_path = input("Enter the path of the template : ")
            template_object = Template_match_detector()
            template_object.match_template(image_path, roi_path)
            break
    
        elif option == 5:
            print("Enter the path of object to be detected : ")
            template_path = input('')
            live_template = Live_Template_Detector()
            live_template.detectObject(template_path)
            break
            

#             elif option == 6:
#             path = input("Enter the path of the video:")
#             detect_ob = Video_Detection()
#             #detect_ob.detect(path)
#             break
                     
        else :
            break
            
