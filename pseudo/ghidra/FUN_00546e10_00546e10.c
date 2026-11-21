// FUN_00546e10  00546e10

void __fastcall FUN_00546e10(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 8))(1,param_1[8]);
  }
  else if (iVar1 == 1) {
    FUN_005442b0();
    (**(code **)(*param_1 + 8))(2,param_1[8]);
  }
  else if (iVar1 == 2) {
    FUN_005493a0();
    FUN_005fc420(0);
  }
  else {
    FUN_005e9f20("false","..\\Casino\\videoblackjackdisplay.cpp",0x5b7);
  }
  return;
}

