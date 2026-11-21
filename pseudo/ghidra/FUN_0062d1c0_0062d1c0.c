// FUN_0062d1c0  0062d1c0

void __fastcall FUN_0062d1c0(int param_1)

{
  int local_8;
  
  if (*(int *)(param_1 + 0x2d8) != 0) {
    FUN_0062fde0("version         %d\n",**(undefined4 **)(param_1 + 0x2d8));
    FUN_0062fde0("channels        %d\n",*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4));
    FUN_0062fde0("rate (hz)       %d\n",*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 8));
    FUN_0062fde0("bitrate upper   %d\n",*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 0xc));
    FUN_0062fde0("bitrate nominal %d\n",*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 0x10));
    FUN_0062fde0("bitrate lower   %d\n",*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 0x14));
    FUN_0062fde0("bitrate window  %d\n",*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 0x18));
    FUN_0062fde0("\nvendor %s\n",*(undefined4 *)(*(int *)(param_1 + 0x2dc) + 0xc));
    if (*(int *)(param_1 + 0x2dc) != 0) {
      for (local_8 = 0; local_8 < *(int *)(*(int *)(param_1 + 0x2dc) + 8); local_8 = local_8 + 1) {
        FUN_0062fde0("   %s\n",*(undefined4 *)(**(int **)(param_1 + 0x2dc) + local_8 * 4));
      }
      FUN_0062fde0(&DAT_006bedd8);
    }
  }
  return;
}

