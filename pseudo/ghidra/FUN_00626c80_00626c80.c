// FUN_00626c80  00626c80

void __thiscall FUN_00626c80(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char *_Str1;
  int iVar6;
  undefined **_Str2;
  int local_54;
  int local_50;
  int local_44;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  cVar1 = FUN_005f54c0();
  if (cVar1 == '\0') {
    local_14 = *(int *)(param_1 + 0x1c);
    local_18 = *(int *)(param_1 + 0x18);
    local_1c = *(int *)(param_1 + 0x14);
    local_20 = *(int *)(param_1 + 0x10);
    FUN_005ec3a0(&local_20,&local_20,param_2);
    local_10 = CONCAT13(local_10._3_1_,*(undefined3 *)(param_1 + 0x4a));
    uVar2 = FUN_005f63f0();
    local_10 = CONCAT13(uVar2,(undefined3)local_10);
    if (*(char *)(param_1 + 0x48) != '\0') {
      for (local_c = local_1c; local_c < local_14; local_c = local_c + 1) {
        uVar3 = FUN_005f6620();
        FUN_005f9380(local_20,local_18 + -1,local_c,local_10,uVar3);
      }
    }
    local_10 = CONCAT13(local_10._3_1_,*(undefined3 *)(param_1 + 0x4d));
    uVar2 = FUN_005f63f0();
    local_10 = CONCAT13(uVar2,(undefined3)local_10);
    if (*(char *)(param_1 + 0x49) != '\0') {
      iVar4 = FUN_00626b20();
      if ((iVar4 != 0) && (local_1c == *(int *)(param_1 + 0x14))) {
        piVar5 = (int *)FUN_00626b20();
        _Str2 = &PTR_006b27f8;
        _Str1 = (char *)(**(code **)(*piVar5 + 0xb8))();
        iVar4 = strcmp(_Str1,(char *)_Str2);
        if (iVar4 == 0) {
          uVar3 = FUN_005f6620();
          FUN_005f9380(local_20,local_18 + -1,*(undefined4 *)(param_1 + 0x14),local_10,uVar3);
        }
        else {
          piVar5 = (int *)FUN_00626b20();
          iVar4 = (**(code **)(*piVar5 + 0x4c))();
          if (iVar4 + -3 < local_18 + -1) {
            piVar5 = (int *)FUN_00626b20();
            local_44 = (**(code **)(*piVar5 + 0x4c))();
            local_44 = local_44 + -3;
          }
          else {
            local_44 = local_18 + -1;
          }
          local_8 = local_44;
          if (local_20 < local_44) {
            uVar3 = FUN_005f6620();
            FUN_005f9380(local_20,local_8,*(undefined4 *)(param_1 + 0x14),local_10,uVar3);
          }
          piVar5 = (int *)FUN_00626b20();
          iVar4 = (**(code **)(*piVar5 + 0x4c))();
          FUN_00626b20();
          iVar6 = FUN_005f5550();
          if (iVar4 + 2 + iVar6 < local_18 + -1) {
            piVar5 = (int *)FUN_00626b20();
            iVar4 = (**(code **)(*piVar5 + 0x4c))();
            FUN_00626b20();
            local_50 = FUN_005f5550();
            local_50 = iVar4 + 2 + local_50;
          }
          else {
            local_50 = local_18 + -1;
          }
          if (local_20 < local_50) {
            local_54 = local_50;
          }
          else {
            local_54 = local_20;
          }
          local_8 = local_54;
          uVar3 = FUN_005f6620();
          FUN_005f9380(local_8,local_18 + -1,*(undefined4 *)(param_1 + 0x14),local_10,uVar3);
        }
      }
      if (local_14 + -1 == *(int *)(param_1 + 0x1c) + -1) {
        uVar3 = FUN_005f6620();
        FUN_005f9380(local_20,local_18 + -1,*(int *)(param_1 + 0x1c) + -1,local_10,uVar3);
      }
      if (local_20 == *(int *)(param_1 + 0x10)) {
        uVar3 = FUN_005f6620();
        FUN_005f93e0(*(undefined4 *)(param_1 + 0x10),local_1c,local_14 + -1,local_10,uVar3);
      }
      if (local_18 + -1 == *(int *)(param_1 + 0x18) + -1) {
        uVar3 = FUN_005f6620();
        FUN_005f93e0(*(int *)(param_1 + 0x18) + -1,local_1c,local_14 + -1,local_10,uVar3);
      }
    }
  }
  return;
}

