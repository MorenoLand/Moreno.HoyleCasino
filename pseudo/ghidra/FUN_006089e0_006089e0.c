// FUN_006089e0  006089e0

int __thiscall FUN_006089e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_006084e0(param_1);
  if (iVar1 == -1) {
    for (local_c = 1; local_c < 0xc; local_c = local_c + 1) {
      if (*(int *)(&DAT_00796b48 + local_c * 0x24) < *(int *)(&DAT_00796b48 + local_8 * 0x24)) {
        local_8 = local_c;
      }
    }
    if (param_2 < *(int *)(&DAT_00796b48 + local_8 * 0x24)) {
      FUN_0062fde0(
                  ">>> Unable to play sound with priority %d because all indicies are being used by sounds with higher priorities.\n"
                  );
      iVar1 = -1;
    }
    else {
      FUN_0062fde0(">>> Replacing sound %d, priority %d with sound of priority %d.\n",local_8,
                   *(undefined4 *)(&DAT_00796b48 + local_8 * 0x24),param_2);
      FUN_00609720(local_8,1);
      iVar1 = local_8;
    }
  }
  return iVar1;
}

