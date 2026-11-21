// FUN_0062e890  0062e890

void __thiscall FUN_0062e890(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_18;
  
  uVar2 = param_2 * *(int *)(param_1 + 0x418) - 1U & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  iVar6 = (param_2 * *(int *)(param_1 + 0x418) + 3) - uVar2;
  pvVar3 = operator_new(iVar6 * param_3);
  for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
    for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
      iVar4 = FUN_00686cc0();
      iVar1 = *(int *)(param_1 + 0x414);
      iVar5 = FUN_00686cc0();
      *(undefined4 *)((int)pvVar3 + local_1c * *(int *)(param_1 + 0x418) + local_18 * iVar6) =
           *(undefined4 *)
            (iVar4 * iVar1 + iVar5 * *(int *)(param_1 + 0x418) + *(int *)(param_1 + 0x408));
    }
  }
  *(int *)(param_1 + 0x40c) = param_2;
  *(int *)(param_1 + 0x410) = param_3;
  *(int *)(param_1 + 0x414) = iVar6;
  operator_delete(*(void **)(param_1 + 0x408));
  *(void **)(param_1 + 0x408) = pvVar3;
  return;
}

