// FUN_0065ce20  0065ce20

void __fastcall FUN_0065ce20(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(*(int *)(param_1 + 0x8c) + 0x1bc) != 0) {
    uVar2 = FUN_00615260();
    uVar2 = FUN_006639a0(uVar2);
    uVar2 = FUN_00615260(uVar2);
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x88))(uVar2);
  }
  FUN_00648270(1);
  if (*(char *)(*(int *)(param_1 + 0x8c) + 0x1c1) == '\0') {
    uVar1 = FUN_00615260();
    *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x1c2) = uVar1;
    puVar3 = (undefined4 *)FUN_0063aac0(param_1,*(undefined4 *)(param_1 + 0x70));
    *puVar3 = 3;
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x70) + 0x20) + 0x14) + 0x10;
    uVar2 = FUN_00615260(iVar4);
    FUN_00663c70(uVar2,iVar4);
  }
  else {
    uVar1 = FUN_00615260();
    *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x1c3) = uVar1;
    puVar3 = (undefined4 *)FUN_0063aac0();
    *puVar3 = 2;
    uVar2 = FUN_00615260();
    iVar4 = FUN_0063aac0();
    *(undefined4 *)(iVar4 + 0x54) = uVar2;
  }
  FUN_006464d0(0,0);
  FUN_0065c300();
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x90))();
  return;
}

