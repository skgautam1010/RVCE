import unittest
import test_assgn1
import test_assgn2
#two test cases are run together
class Test_Suite(unittest.TestCase):
    def test_main(self):
        self.suite = unittest.TestSuite()
        self.suite.addTests([unittest.TestLoader().loadTestsFromModule(test_assgn1),unittest.TestLoader().loadTestsFromModule(test_assgn2)])
        runner = unittest.TextTestRunner()
        runner.run(self.suite)
if __name__ == '__main__':
    unittest.main()
