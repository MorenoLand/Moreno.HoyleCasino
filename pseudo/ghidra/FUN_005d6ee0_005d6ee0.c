// FUN_005d6ee0  005d6ee0

undefined4 __thiscall FUN_005d6ee0(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 local_1c [8];
  undefined8 local_14;
  undefined1 local_c [8];
  
  if (param_2 == '\0') {
    iVar2 = FUN_005d52e0(param_1);
    if (*(char *)(iVar2 + 0x29) != '\0') {
      cVar1 = FUN_005d6c60();
      if (cVar1 != '\0') goto LAB_005d6f16;
    }
    uVar3 = 0;
  }
  else {
LAB_005d6f16:
    iVar2 = FUN_005d52e0(param_1);
    *(undefined1 *)(iVar2 + 0x29) = 0;
    uVar3 = FUN_005d6bd0(0);
    uVar5 = FUN_0064c8a0(uVar3);
    puVar6 = local_1c;
    local_14 = uVar5;
    FUN_005d5a90(local_c);
    puVar4 = (undefined4 *)FUN_0064c630(puVar6,uVar5);
    FUN_005d5af0(*puVar4,puVar4[1]);
    FUN_0063b0a0();
    uVar3 = 1;
  }
  return uVar3;
}

