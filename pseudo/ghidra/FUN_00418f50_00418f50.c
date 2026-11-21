// FUN_00418f50  00418f50

void __fastcall FUN_00418f50(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_10;
  undefined4 local_8;
  
  local_1c = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    iVar2 = FUN_00419610(local_8);
    local_1c = iVar2 + local_1c;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x464) + 0x80c);
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    local_10 = *(int *)(*(int *)(param_1 + 0x464) + 0x80c);
    while (local_10 = local_10 + -1, 0 < local_10) {
      iVar3 = FUN_0062fbf0(iVar2 - local_1c);
      uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x464) + 4 + (iVar3 + local_1c) * 2);
      *(undefined2 *)(*(int *)(param_1 + 0x464) + 4 + (iVar3 + local_1c) * 2) =
           *(undefined2 *)(*(int *)(param_1 + 0x464) + 4 + local_10 * 2);
      *(undefined2 *)(*(int *)(param_1 + 0x464) + 4 + local_10 * 2) = uVar1;
    }
  }
  FUN_006436a0(*(int *)(*(int *)(param_1 + 0x464) + 0x80c) + -1);
  return;
}

