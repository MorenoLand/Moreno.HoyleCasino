// FUN_005e7c20  005e7c20

void __thiscall FUN_005e7c20(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  
  (&DAT_00794930)[param_2] = 1;
  *(int *)(&DAT_0079493c + param_2 * 0xb8) = param_2 + 1000;
  uVar1 = FUN_0064c8a0(0,0,param_1);
  *(undefined8 *)(&DAT_00794984 + param_2 * 0xb8) = uVar1;
  *(undefined4 *)(&DAT_0079498c + param_2 * 0xb8) = 0;
  *(undefined4 *)(&DAT_00794980 + param_2 * 0xb8) = 0;
  strcpy(&DAT_00794940 + param_2 * 0xb8,(&PTR_s_Kelly_0075e9b4)[param_2 * 0xc]);
  (&DAT_007949e8)[param_2 * 0xb8] = (&DAT_0075e9bc)[param_2 * 0x30];
  *(undefined4 *)(&DAT_00794980 + param_2 * 0xb8) = *(undefined4 *)(&DAT_0075e9b8 + param_2 * 0x30);
  uVar1 = FUN_0064c8a0(*(undefined4 *)(&DAT_0075e9a0 + param_2 * 0x30),0);
  *(undefined8 *)(&DAT_00794984 + param_2 * 0xb8) = uVar1;
  *(undefined4 *)(&DAT_0079498c + param_2 * 0xb8) = *(undefined4 *)(&DAT_0075e9a4 + param_2 * 0x30);
  (&DAT_00794990)[param_2 * 0xb8] = (&DAT_0075e9a8)[param_2 * 0x30];
  *(undefined4 *)(&DAT_00794994 + param_2 * 0xb8) = *(undefined4 *)(&DAT_0075e9ac + param_2 * 0x30);
  *(undefined4 *)(&DAT_00794998 + param_2 * 0xb8) = *(undefined4 *)(&DAT_0075e9b0 + param_2 * 0x30);
  *(undefined4 *)(&DAT_007949ec + param_2 * 0xb8) = *(undefined4 *)(&DAT_0075e9c0 + param_2 * 0x30);
  *(undefined4 *)(&DAT_007949f0 + param_2 * 0xb8) = *(undefined4 *)(&DAT_0075e9c4 + param_2 * 0x30);
  _strdate(&DAT_00794974 + param_2 * 0xb8);
  return;
}

