// FUN_00403ca0  00403ca0

void __fastcall FUN_00403ca0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_005fc360();
  switch(uVar2) {
  case 0:
    param_1[8] = 0;
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 1:
    (**(code **)(*param_1 + 4))(2);
    uVar2 = FUN_006436c0();
    FUN_00409400(param_1[8],uVar2);
    FUN_00401cb0();
    (**(code **)(*param_1 + 0x1c))(param_1[10]);
    break;
  case 2:
    iVar3 = FUN_004094b0(4);
    if (iVar3 == 2) {
      (**(code **)(*param_1 + 8))(3,param_1[10]);
    }
    else {
      if (param_1[8] == 0) {
        param_1[8] = 4;
      }
      else {
        param_1[8] = 0;
      }
      (**(code **)(*param_1 + 4))(1);
      (**(code **)(*param_1 + 0x1c))(param_1[10]);
    }
    break;
  case 3:
    FUN_00408f10(1);
    (**(code **)(*param_1 + 4))(4);
    (**(code **)(*param_1 + 0x1c))(param_1[10]);
    break;
  case 4:
    cVar1 = FUN_004091f0();
    if (cVar1 != '\0') {
      uVar2 = FUN_006436c0();
      FUN_00409400(0,uVar2);
      FUN_00401cb0();
    }
    (**(code **)(*param_1 + 4))(5);
    (**(code **)(*param_1 + 0x1c))(param_1[10]);
    break;
  case 5:
    cVar1 = FUN_00409230();
    if (cVar1 != '\0') {
      uVar2 = FUN_006436c0();
      FUN_00409400(4,uVar2);
      FUN_00401cb0();
    }
    (**(code **)(*param_1 + 4))(6);
    (**(code **)(*param_1 + 0x1c))(param_1[10]);
    break;
  case 6:
    FUN_00408f10(2);
    (**(code **)(**(int **)(DAT_007902ec + 4) + 8))(1,0);
    FUN_005fc420(0);
  }
  return;
}

