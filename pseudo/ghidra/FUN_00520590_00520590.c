// FUN_00520590  00520590

void FUN_00520590(void)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = FUN_00520d60();
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    *(undefined4 *)(iVar1 + 0x3e4 + local_c * 0x688) = 0;
    *(undefined4 *)(iVar1 + 1000 + local_c * 0x688) = 0;
    *(undefined4 *)(iVar1 + 0x3f0 + local_c * 0x688) = 0;
    *(undefined4 *)(iVar1 + 0x3ec + local_c * 0x688) = 0;
    *(undefined4 *)(iVar1 + 0x3f4 + local_c * 0x688) = 0;
    *(undefined4 *)(iVar1 + 4 + local_c * 0x688) = 0xffffffff;
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      *(undefined1 *)(iVar1 + 0x10 + local_c * 0x688 + local_10) = 0;
    }
  }
  FUN_005209d0(iVar1);
  return;
}

