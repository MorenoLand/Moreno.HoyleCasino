// FUN_005fff90  005fff90

void __thiscall
FUN_005fff90(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  param_1[0x78] = param_2;
  param_1[0x79] = param_3;
  param_1[0x7a] = param_4;
  param_1[0x7b] = param_5;
  param_1[0x7c] = param_6;
  param_1[0x7d] = param_7;
  param_1[0x7e] = param_8;
  param_1[0x7f] = param_9;
  (**(code **)(*param_1 + 0xec))();
  return;
}

