// FUN_00535d80  00535d80

void __fastcall FUN_00535d80(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_c [8];
  
  FUN_0052cc70();
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_005d0a20(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x78));
  FUN_0052e160();
  puVar1 = (undefined4 *)FUN_005d0c30(local_c,*(undefined4 *)(param_1 + 0x78));
  FUN_005e7e40(0,4,*puVar1,puVar1[1]);
  *(undefined4 *)(param_1 + 0x78) = 0;
  FUN_0052ddf0();
  FUN_0052cd40();
  return;
}

