// FUN_005e35e0  005e35e0

undefined4 __thiscall FUN_005e35e0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 local_1c [8];
  undefined8 local_14;
  undefined1 local_c [8];
  
  cVar2 = FUN_005da830();
  if (cVar2 != '\0') {
    uVar3 = FUN_005da880(0);
    uVar6 = FUN_0064c8a0(uVar3);
    puVar7 = local_1c;
    local_14 = uVar6;
    FUN_005d5a90(local_c);
    puVar4 = (undefined4 *)FUN_0064c630(puVar7,uVar6);
    uVar3 = puVar4[1];
    iVar1 = *(int *)(*(int *)(param_1 + 0x1bc) + param_2 * 4);
    *(undefined4 *)(iVar1 + 0x4b4) = *puVar4;
    *(undefined4 *)(iVar1 + 0x4b8) = uVar3;
    uVar3 = FUN_005da880(0);
    uVar6 = FUN_0064c8a0(uVar3);
    puVar5 = (undefined8 *)FUN_005d52e0();
    *puVar5 = uVar6;
  }
  return 1;
}

