// FUN_00546f20  00546f20

void __fastcall FUN_00546f20(int *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  
  uVar3 = FUN_005fc360();
  switch(uVar3) {
  case 0:
    (**(code **)(*param_1 + 8))(1,param_1[8]);
    break;
  case 1:
    uVar2 = FUN_00549080(1,1);
    *(undefined2 *)(param_1 + 9) = uVar2;
    FUN_00548fe0(2,(short)param_1[9],1,0);
    (**(code **)(*param_1 + 8))(2,param_1[8]);
    break;
  case 2:
    cVar1 = FUN_00549df0(CONCAT22(extraout_var,(short)param_1[9]));
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 8))(3,0);
    }
    else {
      (**(code **)(*param_1 + 8))(10,0);
    }
    break;
  case 3:
    FUN_005492c0(1,1);
    (**(code **)(*param_1 + 8))(4,param_1[8]);
    break;
  case 4:
    cVar1 = FUN_0054a6c0(1);
    if (cVar1 != '\0') {
      FUN_00545600(7);
    }
    (**(code **)(*param_1 + 8))(5,0);
    break;
  case 5:
    FUN_005450a0();
    cVar1 = FUN_0054a770(1);
    if (cVar1 != '\0') {
      FUN_00549750();
    }
    (**(code **)(*param_1 + 8))(6,0);
    break;
  case 6:
    FUN_005fc420(0);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\videoblackjackdisplay.cpp",0x621);
    break;
  case 10:
    FUN_005492c0(1,1);
    cVar1 = FUN_0054a6c0(1);
    if (cVar1 != '\0') {
      FUN_00545600(7);
    }
    FUN_00545250();
    (**(code **)(*param_1 + 8))(0xb,param_1[8]);
    break;
  case 0xb:
    FUN_005492c0(2,1);
    cVar1 = FUN_0054a6c0(2);
    if (cVar1 != '\0') {
      FUN_00545600(7);
    }
    (**(code **)(*param_1 + 8))(0xc,param_1[8]);
    break;
  case 0xc:
    FUN_00545b90();
    *(undefined4 *)(DAT_00793404 + 0x20) = 0;
    (**(code **)(*param_1 + 8))(0xd,param_1[8]);
    break;
  case 0xd:
    FUN_005442b0();
    cVar1 = FUN_00542980();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 8))(0xe,param_1[8]);
    }
    else {
      (**(code **)(*param_1 + 8))(0xf,param_1[8]);
    }
    break;
  case 0xe:
    FUN_005492c0(0,1);
    cVar1 = FUN_00542980();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 8))(0xe,param_1[8]);
    }
    else {
      (**(code **)(*param_1 + 8))(0xf,param_1[8]);
    }
    break;
  case 0xf:
    (**(code **)(*param_1 + 8))(0x10,0);
    break;
  case 0x10:
    FUN_005450a0();
    FUN_005493a0();
    FUN_005fc420(0);
  }
  return;
}

