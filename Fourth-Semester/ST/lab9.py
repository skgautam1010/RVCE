import unittest
import lab6
import seven
#two test cases are run together
class Test_Suite(unittest.TestCase):
    def test_main(self):
        self.suite = unittest.TestSuite()
        self.suite.addTests([unittest.TestLoader().loadTestsFromModule(lab6),unittest.TestLoader().loadTestsFromModule(seven)])
        runner = unittest.TextTestRunner()
        runner.run(self.suite)
if __name__ == '__main__':
    unittest.main()