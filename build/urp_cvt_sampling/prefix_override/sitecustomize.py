import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/songdavid/urp_ws1/install/urp_cvt_sampling'
