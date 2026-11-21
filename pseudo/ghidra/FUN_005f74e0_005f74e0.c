// FUN_005f74e0  005f74e0

void __thiscall FUN_005f74e0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  (**(code **)(*DAT_015e55e8 + 0x68))(local_8,local_10,local_c,param_1);
  FUN_005fa880(0,0xffffffff,param_4,1,param_2,param_3,1,local_8[0],local_10[0],local_c[0],0,0,0);
  (**(code **)(*DAT_015e55e8 + 0x6c))(local_8,local_10,local_c);
  FUN_005fa880(0,0xffffffff,param_4,1,param_2 + 1,param_3 + 1,1,local_8[0],local_10[0],local_c[0],0,
               0,0);
  return;
}

