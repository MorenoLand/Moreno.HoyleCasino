// FUN_005d7390  005d7390

void __fastcall FUN_005d7390(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 local_34 [8];
  undefined8 local_2c;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  cVar1 = (**(code **)(*DAT_007947e4 + 0x2a4))();
  if (cVar1 == '\0') {
    iVar3 = FUN_005d5a50();
    iVar4 = FUN_005da880();
    if (iVar4 <= iVar3) {
      puVar2 = (undefined4 *)FUN_005d5a90(local_1c);
      FUN_005d59e0(*puVar2,puVar2[1]);
      uVar5 = FUN_005da880(0);
      uVar6 = FUN_0064c8a0(uVar5);
      puVar7 = local_34;
      local_2c = uVar6;
      FUN_005d5a90(local_24);
      puVar2 = (undefined4 *)FUN_0064c630(puVar7,uVar6);
      uVar5 = puVar2[1];
      *(undefined4 *)(param_1 + 0x4b4) = *puVar2;
      *(undefined4 *)(param_1 + 0x4b8) = uVar5;
      uVar5 = FUN_005da880(0);
      uVar6 = FUN_0064c8a0(uVar5);
      FUN_005d5af0(uVar6);
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_005d5a90(local_c);
    uVar5 = puVar2[1];
    *(undefined4 *)(param_1 + 0x4b4) = *puVar2;
    *(undefined4 *)(param_1 + 0x4b8) = uVar5;
    puVar2 = (undefined4 *)FUN_005d5a90(local_14);
    FUN_005d59e0(*puVar2,puVar2[1]);
  }
  return;
}

