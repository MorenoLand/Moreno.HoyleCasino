// FUN_005e0110  005e0110

void FUN_005e0110(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_var;
  int local_8;
  
  FUN_005fb350(3);
  uVar1 = FUN_00600230(extraout_var);
  iVar3 = FUN_0063aac0();
  *(undefined1 *)(iVar3 + 0x5a) = uVar1;
  FUN_005fb350(4);
  cVar2 = FUN_00600230();
  iVar3 = FUN_005d52e0();
  *(bool *)(iVar3 + 0x5d) = cVar2 == '\0';
  FUN_005fb860(0);
  uVar1 = FUN_006051d0();
  iVar3 = FUN_0063aac0();
  *(undefined1 *)(iVar3 + 0x5c) = uVar1;
  FUN_005fb350(5);
  uVar1 = FUN_00600230();
  iVar3 = FUN_0063aac0();
  *(undefined1 *)(iVar3 + 0x58) = uVar1;
  FUN_005fb350(6);
  uVar1 = FUN_00600230();
  iVar3 = FUN_0063aac0();
  *(undefined1 *)(iVar3 + 0x25d) = uVar1;
  cVar2 = (**(code **)(*DAT_0162ee84 + 0xb8))();
  if (cVar2 == '\0') {
    FUN_005e9f20("shell->ProductHasBackgroundNoise()","..\\Casino\\casinoshell.cpp",0x7db);
  }
  FUN_005fb350(6);
  uVar1 = FUN_00600230();
  iVar3 = FUN_0063aac0();
  *(undefined1 *)(iVar3 + 0x378) = uVar1;
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    uVar5 = *(undefined4 *)(&DAT_0075dac0 + local_8 * 4);
    FUN_005fb350(local_8 + 7);
    uVar4 = FUN_00600230(uVar5);
    FUN_005d5500(uVar4,uVar5);
  }
  return;
}

