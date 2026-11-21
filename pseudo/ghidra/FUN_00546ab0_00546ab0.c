// FUN_00546ab0  00546ab0

void __fastcall FUN_00546ab0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005fc360();
  switch(uVar1) {
  case 0:
    FUN_005492c0(1,1);
    (**(code **)(*param_1 + 8))(1,param_1[8]);
    break;
  case 1:
    FUN_005492c0(0,0);
    (**(code **)(*param_1 + 8))(2,param_1[8]);
    break;
  case 2:
    FUN_005492c0(1,1);
    (**(code **)(*param_1 + 8))(3,param_1[8]);
    break;
  case 3:
    FUN_005492c0(0,1);
    (**(code **)(*param_1 + 8))(4,param_1[8]);
    break;
  case 4:
    FUN_00549300();
    FUN_005fc420(0);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\videoblackjackdisplay.cpp",0x56a);
  }
  return;
}

