// FUN_005c1d60  005c1d60

void __thiscall FUN_005c1d60(int *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 local_3e;
  undefined1 local_3d;
  
  cVar2 = (**(code **)(*param_1 + 0x24))();
  if (cVar2 != '\0') {
    return;
  }
  if (param_2 == '\0') {
    iVar1 = param_1[1];
    FUN_005c9140();
    iVar1 = *(int *)(iVar1 + 0xe0);
    iVar3 = FUN_0060fb10();
    if (iVar1 < iVar3) goto LAB_005c1dbd;
    local_3d = 0;
  }
  else {
LAB_005c1dbd:
    local_3d = 1;
  }
  iVar1 = param_1[1];
  FUN_005c9140();
  FUN_0060fb30(*(undefined4 *)(iVar1 + 0xe0),local_3d);
  if (param_2 == '\0') {
    iVar1 = param_1[1];
    FUN_005c9140();
    iVar1 = *(int *)(iVar1 + 4);
    iVar3 = FUN_0060fb10();
    if (iVar3 <= iVar1) {
      local_3e = 0;
      goto LAB_005c1e2d;
    }
  }
  local_3e = 1;
LAB_005c1e2d:
  iVar1 = param_1[1];
  FUN_005c9140();
  FUN_0060fb30(*(undefined4 *)(iVar1 + 4),local_3e);
  FUN_0060fb30(*(undefined4 *)(param_1[1] + 0xc),1);
  FUN_0060fb30(*(int *)(param_1[1] + 8) / *(int *)(param_1[1] + 0xc),1);
  FUN_0060fb30(*(undefined4 *)(param_1[1] + 8),1);
  return;
}

