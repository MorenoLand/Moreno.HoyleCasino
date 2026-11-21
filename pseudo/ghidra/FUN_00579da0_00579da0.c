// FUN_00579da0  00579da0

undefined4 FUN_00579da0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_0079346d == '\0') {
    FUN_00579cd0();
    uVar1 = 100;
  }
  else if (DAT_0079346c == '\0') {
    uVar1 = 0;
  }
  else {
    DAT_0079346c = '\0';
    DAT_00793570 = DAT_00793570 + 1;
    if (5 < DAT_00793570) {
      DAT_00793570 = 0;
    }
    if (DAT_0079346e != '\0') {
      uVar1 = 0;
      FUN_005dcb00(0,0);
      FUN_005d7090(uVar1);
      uVar2 = FUN_0064c8a0(5000,0);
      FUN_005dcb00(0,uVar2);
      FUN_005d5af0(uVar2);
    }
    (**(code **)(*DAT_0162ee84 + 0x34))(0x17);
    uVar1 = (&DAT_0074b05c)[DAT_00793570 * 6];
  }
  return uVar1;
}

