// FUN_005b7f70  005b7f70

void __fastcall FUN_005b7f70(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    iVar2 = FUN_005b5ff0(local_10);
    local_c = iVar2 + local_c;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x57c) + 0x80c);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    local_18 = *(int *)(*(int *)(param_1 + 0x57c) + 0x80c);
    while (local_18 = local_18 + -1, 0 < local_18) {
      iVar3 = FUN_0062fbf0(iVar2 - local_c);
      uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x57c) + 4 + (iVar3 + local_c) * 2);
      *(undefined2 *)(*(int *)(param_1 + 0x57c) + 4 + (iVar3 + local_c) * 2) =
           *(undefined2 *)(*(int *)(param_1 + 0x57c) + 4 + local_18 * 2);
      *(undefined2 *)(*(int *)(param_1 + 0x57c) + 4 + local_18 * 2) = uVar1;
    }
  }
  FUN_006436a0(*(int *)(*(int *)(param_1 + 0x57c) + 0x80c) + -1);
  return;
}

