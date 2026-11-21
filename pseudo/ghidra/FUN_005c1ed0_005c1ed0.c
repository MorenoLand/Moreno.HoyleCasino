// FUN_005c1ed0  005c1ed0

void __fastcall FUN_005c1ed0(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_2c;
  undefined1 local_28;
  int local_8;
  
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 == '\0') {
LAB_005c1f0a:
    local_28 = 0;
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x24))();
    if (cVar2 != '\0') goto LAB_005c1f0a;
    local_28 = 1;
  }
  for (local_8 = 0; -1 < *(int *)(&DAT_00759e6c + local_8 * 4); local_8 = local_8 + 1) {
    piVar3 = (int *)FUN_005fb300(*(undefined4 *)(&DAT_00759e6c + local_8 * 4));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xd4))(local_28);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_1 + 0x24))();
    if (cVar2 == '\0') {
      iVar1 = *(int *)(param_1[1] + 8);
      iVar4 = FUN_005c47b0();
      if (iVar1 <= iVar4) {
        local_2c = 1;
        goto LAB_005c1fbf;
      }
    }
  }
  local_2c = 0;
LAB_005c1fbf:
  piVar3 = (int *)FUN_005fb300(0x5e);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xd4))(local_2c);
  }
  return;
}

