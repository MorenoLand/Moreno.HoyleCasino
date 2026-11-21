// FUN_00413360  00413360

undefined4 __thiscall FUN_00413360(int param_1,int param_2,int param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 local_48;
  undefined4 local_44;
  int local_38;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069dd52;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == -1) {
    local_14 = -1;
  }
  else {
    if (param_2 == 4) {
      local_38 = 0;
    }
    else {
      local_38 = (int)*(char *)(DAT_00790324 + 0x119 + param_2 * 0x118);
    }
    local_14 = local_38;
  }
  if (param_3 == -1) {
    param_3 = *(int *)(DAT_00790324 + 0x4d4);
  }
  FUN_005dcb00(param_2,DAT_00781870 ^ (uint)&stack0xfffffffc);
  piVar3 = (int *)FUN_0063aac0();
  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((((bVar1) && (cVar2 = FUN_005df7b0(0xffffffff), cVar2 != '\0')) && (param_4 != '\0')) &&
     ((*(char *)(param_1 + 0x19) == '\0' && (iVar4 = FUN_0040b260(param_2), param_3 != iVar4)))) {
    FUN_0040d930();
    *(undefined1 *)(param_1 + 0x19) = 1;
    FUN_0057c140();
    uVar5 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(int *)(DAT_00790324 + 0x4d4) = param_3;
    *(undefined1 *)(param_1 + 0xd) = 1;
    switch(param_3) {
    case 0:
      FUN_00413690(param_2);
      break;
    case 1:
      (**(code **)(**(int **)(DAT_00790320 + 4) + 4))(1);
      pvVar6 = operator_new(0x28);
      local_8 = 0;
      if (pvVar6 == (void *)0x0) {
        local_44 = 0;
      }
      else {
        local_44 = FUN_00410d40(*(undefined4 *)(DAT_00790320 + 4));
      }
      local_8 = 0xffffffff;
      FUN_005fc420(local_44);
      break;
    case 2:
      FUN_0041b0a0(param_2,local_14);
      FUN_0040cc00();
      (**(code **)(**(int **)(DAT_00790320 + 4) + 4))(1);
      pvVar6 = operator_new(0x28);
      local_8 = 1;
      if (pvVar6 == (void *)0x0) {
        local_48 = 0;
      }
      else {
        local_48 = FUN_00410d40(*(undefined4 *)(DAT_00790320 + 4));
      }
      local_8 = 0xffffffff;
      FUN_005fc420(local_48);
      break;
    case 3:
      FUN_0041b170(param_2,local_14);
      (**(code **)(**(int **)(DAT_0079032c + 0x18 + param_2 * 4) + 0x74))();
      (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
      break;
    case 4:
      FUN_0041b340(param_2);
      FUN_00413690(param_2);
      break;
    default:
      FUN_005e9f20("false","..\\Casino\\blackjackgame.cpp",0x25c);
    }
    uVar5 = 1;
  }
  ExceptionList = local_10;
  return uVar5;
}

