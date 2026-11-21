// FUN_005f7590  005f7590

void __thiscall FUN_005f7590(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  (**(code **)(*DAT_015e55e8 + 0x68))(local_8,local_10,local_c,param_1);
  FUN_005fa880(0,0xffffffff,1,param_4,param_2,param_3,1,local_8[0],local_10[0],local_c[0],0,0,0);
  (**(code **)(*DAT_015e55e8 + 0x6c))(local_8,local_10,local_c);
  FUN_005fa880(0,0xffffffff,1,param_4,param_2 + 1,param_3,1,local_8[0],local_10[0],local_c[0],0,0,0)
  ;
  return;
}

