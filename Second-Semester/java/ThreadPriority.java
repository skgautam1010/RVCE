import java.util.Scanner;

public class ThreadPriority extends Thread {
    public void run() {
        System.out.println("Thread run method");
    }
    public static void testPriority(){
        ThreadPriority th1 = new ThreadPriority();
        ThreadPriority th2 = new ThreadPriority();
        ThreadPriority th3 = new ThreadPriority();
        System.out.println("Thread 1 priority : "+ th1.getPriority());
        System.out.println("Thread 2 priority : "+ th2.getPriority());
        System.out.println("Thread 3 priority : "+ th3.getPriority());
    }

}

class ChangePriority{

    public static void main(String[] args)
    {

	ThreadPriority.testPriority();
        Thread th1 = new Thread(new ThreadPriority(),"Thread-1");
        ThreadPriority th2 = new ThreadPriority();
        ThreadPriority th3 = new ThreadPriority();
        System.out.println("Current thread name : "+ Thread.currentThread().getName());
        System.out.println("Main thread priority : "+ Thread.currentThread().getPriority());
	System.out.println("Setting new priority using norm min max: ");
        th1.setPriority(Thread.NORM_PRIORITY);
        th2.setPriority(Thread.MIN_PRIORITY);
        th3.setPriority(Thread.MAX_PRIORITY);
        System.out.println("Thread 1 priority : "+ th1.getPriority());
        System.out.println("Thread 2 priority : "+ th2.getPriority());
        System.out.println("Thread 3 priority : "+ th3.getPriority());
        try {
            System.out.println("User defined priority ");
            Scanner sc = new Scanner(System.in);

            System.out.println("Enter thread 1 priority");
            int x = sc.nextInt();
            th1.setPriority(x);

            System.out.println("Enter thread 2 priority");
            int y = sc.nextInt();
            th2.setPriority(y);

            System.out.println("Enter thread 3 priority");
            int z = sc.nextInt();
            th3.setPriority(z);

        }catch (IllegalArgumentException e){
            System.out.println("Exception : "+ e + " Priority range '0-10' ");
        }

        System.out.println("Priority :");
        System.out.println("Thread 1 priority : "+ th1.getPriority());
        System.out.println("Thread 2 priority : "+ th2.getPriority());
        System.out.println("Thread 3 priority : "+ th3.getPriority());

    }
}
