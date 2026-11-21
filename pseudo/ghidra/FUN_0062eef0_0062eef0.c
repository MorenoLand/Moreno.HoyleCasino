// FUN_0062eef0  0062eef0

uint __thiscall FUN_0062eef0(int param_1,uint param_2)

{
  uchar *puVar1;
  
  puVar1 = _mbsdec(*(uchar **)(param_1 + 0x20),*(uchar **)(param_1 + 0x24));
  *(uchar **)(param_1 + 0x24) = puVar1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  if (param_2 == 10) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  if (param_2 != **(byte **)(param_1 + 0x24)) {
    FUN_005e9f20("c == *m_ptr","..\\scilib\\platform\\StringManagerBase.cpp",0x70);
  }
  return param_2;
}

