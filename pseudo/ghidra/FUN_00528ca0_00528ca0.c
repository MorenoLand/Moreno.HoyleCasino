// FUN_00528ca0  00528ca0

void __thiscall FUN_00528ca0(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  if (param_2 != '\0') {
    for (local_8 = 0x19; 0 < local_8; local_8 = local_8 + -1) {
      *(undefined4 *)(param_1 + 0xd44 + local_8 * 4) =
           *(undefined4 *)(param_1 + 0xd40 + local_8 * 4);
    }
    uVar1 = FUN_00528bd0();
    *(undefined4 *)(param_1 + 0xd44) = uVar1;
  }
  return;
}

