// FUN_00579cd0  00579cd0

void FUN_00579cd0(void)

{
  char *_Source;
  
  DAT_00793570 = 0xffffffff;
  *(undefined1 *)((int)DAT_0162ee84 + 0x25) = 1;
  *(undefined1 *)((int)DAT_0162ee84 + 0x26) = 0;
  DAT_0079346d = 1;
  DAT_0079346c = 1;
  DAT_0079346e = 0;
  _Source = (char *)FUN_00520e60();
  strcpy(&DAT_00793470,_Source);
  (**(code **)(*DAT_0162ee84 + 0x34))(0x17);
  return;
}

