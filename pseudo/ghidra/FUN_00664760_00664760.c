// FUN_00664760  00664760

void __fastcall FUN_00664760(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    FUN_00664730(local_8,0);
    FUN_00664c90(1);
    *(undefined1 *)(param_1 + local_8 + 0x41) = 0;
    *(undefined1 *)(param_1 + local_8 + 0x4d) = 0;
  }
  return;
}

