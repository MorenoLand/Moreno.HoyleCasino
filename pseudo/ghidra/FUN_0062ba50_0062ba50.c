// FUN_0062ba50  0062ba50

undefined4 __fastcall FUN_0062ba50(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int local_14;
  int local_10;
  char local_9;
  ushort *local_8;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    pvVar2 = operator_new(0x18);
    *(void **)(param_1 + 0x10) = pvVar2;
    fread(*(void **)(param_1 + 0x10),0x18,1,*(FILE **)(param_1 + 0xc));
    local_9 = **(int **)(param_1 + 0x10) != 1;
    local_14 = *(int *)(*(int *)(param_1 + 0x10) + 8);
    if ((bool)local_9) {
      FUN_0062ce00(&local_14);
    }
    if (local_14 == 1) {
      **(uint **)(param_1 + 0x10) = (uint)**(ushort **)(param_1 + 0x10);
      local_9 = **(int **)(param_1 + 0x10) != 1;
    }
    if (local_9 != '\0') {
      FUN_0062bc50();
    }
    fseek(*(FILE **)(param_1 + 0xc),*(long *)(*(int *)(param_1 + 0x10) + 0x14),0);
    pvVar2 = operator_new(*(uint *)(*(int *)(param_1 + 0x10) + 0x10));
    *(void **)(param_1 + 0x14) = pvVar2;
    fread(*(void **)(param_1 + 0x14),*(size_t *)(*(int *)(param_1 + 0x10) + 0x10),1,
          *(FILE **)(param_1 + 0xc));
    if (*(int *)(*(int *)(param_1 + 0x10) + 8) == 1) {
      local_8 = *(ushort **)(param_1 + 0x14);
      *(uint *)(*(int *)(param_1 + 0x14) + 4) = (uint)local_8[1];
      **(uint **)(param_1 + 0x14) = (uint)*local_8;
      local_10 = **(int **)(param_1 + 0x14);
      while (local_10 = local_10 + -1, local_10 != -1) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14 + local_10 * 0x10) =
             *(undefined4 *)(local_8 + local_10 * 8 + 8);
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10 + local_10 * 0x10) =
             *(undefined4 *)(local_8 + local_10 * 8 + 6);
        *(uint *)(*(int *)(param_1 + 0x14) + 0xc + local_10 * 0x10) =
             (uint)local_8[local_10 * 8 + 4];
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 8 + local_10 * 0x10) =
             *(undefined4 *)(local_8 + local_10 * 8 + 2);
      }
    }
    if (local_9 != '\0') {
      FUN_0062bcc0();
    }
    uVar1 = 1;
  }
  return uVar1;
}

