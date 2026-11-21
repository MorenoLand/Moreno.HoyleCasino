// FUN_005df4a0  005df4a0

undefined4 __thiscall FUN_005df4a0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 < 0x30e78a) {
    if (param_2 == 0x30e789) {
LAB_005df52a:
      *(bool *)(DAT_007947e0 + 0x13cd) = param_2 == 0x30e79c;
      FUN_005e2f90(param_2,param_1);
      DAT_007947e0[0x13c8] = -1;
      cVar1 = (**(code **)(*DAT_007947e0 + 0x334))(0x30d401,0xffffffff);
      if (cVar1 == '\0') {
        FUN_005e3130();
      }
      return 1;
    }
    if (param_2 == 0x1399) {
      FUN_005dc1c0();
      return 1;
    }
    if (param_2 == 0x139a) {
      if (DAT_0079506c == 0) {
        FUN_005dc0d0();
      }
      else {
        FUN_005e7500();
      }
      return 1;
    }
  }
  else if ((0x30e79a < param_2) && (param_2 < 0x30e79d)) goto LAB_005df52a;
  return 0;
}

