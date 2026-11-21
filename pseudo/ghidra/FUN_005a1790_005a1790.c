// FUN_005a1790  005a1790

undefined4 FUN_005a1790(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 == 0x315100) {
    if (param_1 == 0x1397) {
      FUN_005dbd00(1,0xffffffff);
      uVar2 = 1;
    }
    else {
      FUN_005e2f90();
      switch(param_1) {
      case 0x1392:
        DAT_007947e0[0x13c3] = 5;
        break;
      case 0x1393:
        DAT_007947e0[0x13c3] = 10;
        break;
      case 0x1394:
        DAT_007947e0[0x13c3] = 0x19;
        break;
      case 0x1395:
        DAT_007947e0[0x13c3] = 100;
        break;
      case 0x1396:
        DAT_007947e0[0x13c3] = 0x4d2;
      }
      cVar1 = (**(code **)(*DAT_007947e0 + 0x334))(1,0xffffffff);
      if (cVar1 == '\0') {
        FUN_005e3130();
      }
      uVar2 = 1;
    }
  }
  else if (param_1 == 0x315100) {
    (**(code **)(*DAT_007947e0 + 0x334))(1,0xffffffff);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

