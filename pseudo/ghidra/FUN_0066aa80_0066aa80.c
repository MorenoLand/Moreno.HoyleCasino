// FUN_0066aa80  0066aa80

void __fastcall FUN_0066aa80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_2c;
  
  FUN_00615ef0();
  iVar1 = FUN_00615260();
  if (iVar1 != -1) {
    iVar1 = FUN_00606570();
    if (iVar1 == 6) {
      iVar1 = FUN_005e4390();
      if (iVar1 == 0) {
        local_2c = 0;
      }
      else {
        FUN_005e4390();
        local_2c = what();
      }
      puVar2 = (undefined4 *)FUN_00666e40(local_2c);
      if (puVar2 != (undefined4 *)0x0) {
        uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xcc) + 0x84) + 8);
        uVar7 = 1;
        uVar5 = 0;
        uVar8 = 0;
        uVar6 = 0xffffffff;
        uVar9 = FUN_00615260(0xffffffff,0,0,1);
        uVar4 = FUN_00666740(uVar4,*puVar2,uVar9);
        FUN_00646fa0(uVar4,uVar6,uVar8,uVar5,uVar7);
      }
    }
    else if (iVar1 == 7) {
      iVar1 = FUN_00639520(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xcc) + 0x84) + 8));
      uVar8 = 0;
      uVar6 = 0xffffffff;
      uVar9 = 0;
      uVar4 = FUN_00615260(0,0xffffffff,0);
      iVar3 = FUN_00615260(uVar4);
      FUN_00647210(*(undefined4 *)(&DAT_00763580 + iVar3 * 0x2c + iVar1 * 0x380),uVar4,uVar9,uVar6,
                   uVar8);
    }
    else if (iVar1 == 8) {
      uVar9 = 0;
      uVar4 = FUN_00615260(0);
      FUN_006473f0(uVar4,uVar9);
    }
  }
  return;
}

