// FUN_00546c40  00546c40

void __fastcall FUN_00546c40(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_005fc360();
  switch(uVar2) {
  case 0:
    (**(code **)(*param_1 + 8))(1,param_1[8]);
    break;
  case 1:
    FUN_005442b0();
    cVar1 = FUN_00542980();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 8))(2,param_1[8]);
    }
    else {
      (**(code **)(*param_1 + 8))(3,param_1[8]);
    }
    break;
  case 2:
    FUN_005492c0(0,1);
    cVar1 = FUN_00542980();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 8))(2,param_1[8]);
    }
    else {
      (**(code **)(*param_1 + 8))(3,param_1[8]);
    }
    break;
  case 3:
    (**(code **)(*param_1 + 8))(4,0);
    break;
  case 4:
    FUN_005450a0();
    FUN_005493a0();
    FUN_005fc420(0);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\videoblackjackdisplay.cpp",0x599);
  }
  return;
}

