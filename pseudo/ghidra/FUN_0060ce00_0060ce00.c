// FUN_0060ce00  0060ce00

void FUN_0060ce00(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int local_314;
  undefined1 auStack_30c [772];
  int *local_8;
  
  local_8 = (int *)FUN_00603c50(0x204c4150,param_2,0);
  if (local_8 != (int *)0x0) {
    iVar2 = (**(code **)(*local_8 + 4))();
    if (iVar2 != 0) {
      for (local_314 = 0; local_314 < 0x100; local_314 = local_314 + 1) {
        uVar1 = *(undefined1 *)(iVar2 + 0x1a + local_314 * 4);
        *(undefined1 *)(iVar2 + 0x1a + local_314 * 4) =
             *(undefined1 *)(iVar2 + 0x18 + local_314 * 4);
        *(undefined1 *)(iVar2 + 0x18 + local_314 * 4) = uVar1;
        auStack_30c[local_314 * 3] = *(undefined1 *)(iVar2 + 0x1a + local_314 * 4);
        auStack_30c[local_314 * 3 + 1] = *(undefined1 *)(iVar2 + 0x19 + local_314 * 4);
        auStack_30c[local_314 * 3 + 2] = *(undefined1 *)(iVar2 + 0x18 + local_314 * 4);
      }
      FUN_006041d0(local_8);
    }
  }
  return;
}

