// FUN_005655d0  005655d0

int __fastcall FUN_005655d0(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + local_8 * 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x31224c;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return param_1;
}

