// FUN_005f8b30  005f8b30

void __fastcall FUN_005f8b30(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_14 [16];
  
  *(undefined1 *)(param_1 + 0x178) = 0;
  memset((void *)(param_1 + 0x180),0,0x10);
  if (*(int *)(param_1 + 0x17c) != 0) {
    puVar1 = (undefined4 *)FUN_005ebac0(local_14);
    *(undefined4 *)(param_1 + 0x180) = *puVar1;
    *(undefined4 *)(param_1 + 0x184) = puVar1[1];
    *(undefined4 *)(param_1 + 0x188) = puVar1[2];
    *(undefined4 *)(param_1 + 0x18c) = puVar1[3];
  }
  return;
}

