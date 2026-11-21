// FUN_004336e0  004336e0

void __fastcall FUN_004336e0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[5];
  if (iVar1 < 4) {
    if (iVar1 == 3) {
      FUN_0042df00(param_1,2);
      return;
    }
    if (iVar1 == 1) {
      FUN_0042f230();
      return;
    }
    if (iVar1 == 2) {
      (**(code **)(*param_1 + 4))(3);
      iVar1 = FUN_00637810(2);
      (**(code **)(*param_1 + 0x1c))(iVar1 * 6 + 0xa0);
      return;
    }
  }
  else if (iVar1 == 500) {
    FUN_00434620();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
    return;
  }
  FUN_005e9f20("false","..\\Casino\\crapsroom.cpp",0x25f);
  return;
}

