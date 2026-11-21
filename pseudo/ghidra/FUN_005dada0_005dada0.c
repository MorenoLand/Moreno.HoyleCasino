// FUN_005dada0  005dada0

int __fastcall FUN_005dada0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = -1;
  local_18 = FUN_00636610();
  FUN_005daa20(&local_c);
  iVar2 = FUN_005daf50();
  if (iVar2 == -1) {
    for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
      FUN_005dcb00(local_10);
      iVar2 = FUN_005d5a50();
      iVar3 = (**(code **)(*param_1 + 0x2b0))();
      if (iVar2 < iVar3) {
        return -1;
      }
      puVar5 = local_20;
      uVar6 = local_c;
      uVar7 = local_8;
      FUN_005dcb00(local_10,puVar5,local_c,local_8);
      FUN_005d5a90(puVar5);
      cVar1 = FUN_0064c6a0(uVar6,uVar7);
      if (cVar1 != '\0') {
        FUN_005dcb00(local_10);
        iVar2 = FUN_005d5a50();
        iVar3 = (**(code **)(*param_1 + 0x2b0))();
        if (iVar3 < iVar2) {
          puVar5 = local_28;
          FUN_005dcb00(local_10,puVar5);
          puVar4 = (undefined4 *)FUN_005d5a90(puVar5);
          local_c = *puVar4;
          local_8 = puVar4[1];
          local_14 = local_10;
        }
      }
    }
  }
  else {
    local_14 = -1;
  }
  return local_14;
}

