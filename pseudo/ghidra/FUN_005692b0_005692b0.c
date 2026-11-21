// FUN_005692b0  005692b0

void __fastcall FUN_005692b0(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + 0x1a + local_8 * 2) = *(undefined2 *)(param_1 + 0x24 + local_8 * 2);
  }
  return;
}

