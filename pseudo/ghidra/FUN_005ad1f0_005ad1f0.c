// FUN_005ad1f0  005ad1f0

undefined4 __thiscall FUN_005ad1f0(int param_1,int param_2,int param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  undefined4 local_44;
  undefined4 local_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7cbc;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = FUN_005b4e50(param_2);
  if (param_3 == -1) {
    param_3 = *(int *)(DAT_00793604 + 0x5bc);
  }
  FUN_005dcb00(param_2,uVar3);
  piVar5 = (int *)FUN_0063aac0();
  if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((((bVar1) && (cVar2 = FUN_005df7b0(0xffffffff), cVar2 != '\0')) && (param_4 != '\0')) &&
     ((*(char *)(param_1 + 0x19) == '\0' && (iVar6 = FUN_005a4b20(param_2), param_3 != iVar6)))) {
    FUN_005a80d0();
    *(undefined1 *)(param_1 + 0x19) = 1;
    FUN_0057c140();
    uVar4 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(int *)(DAT_00793604 + 0x5bc) = param_3;
    *(undefined1 *)(param_1 + 0xd) = 1;
    switch(param_3) {
    case 0:
      FUN_005aee50(param_2);
      break;
    case 1:
      (**(code **)(**(int **)(DAT_00793600 + 4) + 4))(1);
      pvVar7 = operator_new(0x28);
      local_8 = 0;
      if (pvVar7 == (void *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = FUN_005ab7f0(*(undefined4 *)(DAT_00793600 + 4));
      }
      local_8 = 0xffffffff;
      FUN_005fc420(local_40);
      break;
    case 2:
      FUN_005b3ee0(param_2,uVar4);
      FUN_005a7ea0();
      (**(code **)(**(int **)(DAT_00793600 + 4) + 4))(1);
      pvVar7 = operator_new(0x28);
      local_8 = 1;
      if (pvVar7 == (void *)0x0) {
        local_44 = 0;
      }
      else {
        local_44 = FUN_005ab7f0(*(undefined4 *)(DAT_00793600 + 4));
      }
      local_8 = 0xffffffff;
      FUN_005fc420(local_44);
      break;
    case 3:
      FUN_005b8090(param_2,uVar4);
      (**(code **)(**(int **)(DAT_007935f8 + 0x18 + param_2 * 4) + 0x74))();
      (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
      break;
    case 4:
      FUN_005b81f0(param_2);
      FUN_005aee50(param_2);
      break;
    default:
      FUN_005e9f20("false","..\\Casino\\royalmatchgame.cpp",0xbb);
    }
    uVar4 = 1;
  }
  ExceptionList = local_10;
  return uVar4;
}

