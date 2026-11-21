// FUN_0062e560  0062e560

void __thiscall
FUN_0062e560(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x408) != 0) {
    uVar2 = FUN_0062e360();
    local_20 = FUN_0062e340();
    local_28 = 0;
    local_24 = 0;
    local_1c = uVar2;
    FUN_005ec3a0(&param_2,&local_28,&param_2);
    if (param_2 < param_4) {
      if (param_3 < param_5) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) && (local_18 = *(int *)(param_1 + 0x408), local_18 != 0)) {
      for (local_8 = param_3; local_8 < param_5; local_8 = local_8 + 1) {
        local_14 = local_8 * *(int *)(param_1 + 0x414) + param_2 * *(int *)(param_1 + 0x418) +
                   (param_4 - param_2) * *(int *)(param_1 + 0x418);
        local_10 = local_8 * *(int *)(param_1 + 0x414) + param_2 * *(int *)(param_1 + 0x418);
        for (local_c = local_10; local_c < local_14; local_c = local_c + *(int *)(param_1 + 0x418))
        {
          uVar2 = FUN_00617b30(param_6);
          *(undefined4 *)(local_18 + local_c) = uVar2;
        }
      }
    }
  }
  return;
}

