// FUN_0045f510  0045f510

undefined4 FUN_0045f510(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  if ((param_2 == 0x30e3a0) || (param_2 == 0x30e3a4)) {
    local_8 = 0xffffffff;
    if (param_2 == 0x30e3a0) {
      local_8 = 10;
    }
    else if (param_2 == 0x30e3a4) {
      local_8 = 5;
    }
    if (param_1 == 0x1397) {
      FUN_005dbd00(local_8,0xffffffff);
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
      }
      cVar1 = (**(code **)(*DAT_007947e0 + 0x334))(local_8,0xffffffff);
      if (cVar1 == '\0') {
        FUN_005e3130();
      }
      uVar2 = 1;
    }
  }
  else if (param_1 == 0x30e3a0) {
    (**(code **)(*DAT_007947e0 + 0x334))(10,0xffffffff);
    uVar2 = 1;
  }
  else if (param_1 == 0x30e3a4) {
    (**(code **)(*DAT_007947e0 + 0x334))(5,0xffffffff);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

