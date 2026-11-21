// FUN_0060ab30  0060ab30

void FUN_0060ab30(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int local_10;
  
  FUN_0062fde0(">>> reshuffling medley %d\n",*(undefined4 *)(&DAT_00796d38 + param_1 * 0x74));
  local_10 = 0;
  while (*(int *)(&DAT_00796d44 + local_10 * 4 + param_1 * 0x74) != -1) {
    local_10 = local_10 + 1;
  }
  iVar1 = *(int *)(&DAT_00796d40 + local_10 * 4 + param_1 * 0x74);
  for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
    iVar3 = FUN_0062fbf0(local_10);
    iVar4 = FUN_0062fbf0(local_10);
    uVar2 = *(undefined4 *)(&DAT_00796d44 + iVar3 * 4 + param_1 * 0x74);
    *(undefined4 *)(&DAT_00796d44 + iVar3 * 4 + param_1 * 0x74) =
         *(undefined4 *)(&DAT_00796d44 + iVar4 * 4 + param_1 * 0x74);
    *(undefined4 *)(&DAT_00796d44 + iVar4 * 4 + param_1 * 0x74) = uVar2;
  }
  if (((param_2 != '\0') && (1 < local_10)) && (*(int *)(&DAT_00796d44 + param_1 * 0x74) == iVar1))
  {
    uVar2 = *(undefined4 *)(&DAT_00796d44 + param_1 * 0x74);
    *(undefined4 *)(&DAT_00796d44 + param_1 * 0x74) =
         *(undefined4 *)(&DAT_00796d48 + param_1 * 0x74);
    *(undefined4 *)(&DAT_00796d48 + param_1 * 0x74) = uVar2;
  }
  FUN_0062fde0(">>> reshuffed play order\n");
  local_1c = 0;
  while (*(int *)(&DAT_00796d44 + local_1c * 4 + param_1 * 0x74) != -1) {
    FUN_0062fde0(">>>     %d\n",*(undefined4 *)(&DAT_00796d44 + local_1c * 4 + param_1 * 0x74));
    local_1c = local_1c + 1;
  }
  return;
}

