// FUN_00481500  00481500

void __thiscall
FUN_00481500(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5)

{
  FUN_0047ffe0();
  *param_3 = *(undefined4 *)(param_1 + 0x3fc);
  *param_4 = *(undefined4 *)(param_1 + 0x3f8);
  *param_5 = *(undefined4 *)(param_1 + 0x3f4);
  if (param_2 == 3) {
    *param_5 = 0xffffffff;
  }
  return;
}

