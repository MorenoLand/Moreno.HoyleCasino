// FUN_00568530  00568530

undefined1 __thiscall FUN_00568530(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0056b910(param_1);
  if ((((param_2 != 1) && (param_2 != 5)) && (param_2 != 10)) &&
     ((param_2 != 0x19 && (param_2 != 0x32)))) {
    FUN_005e9f20("numHands==1 || numHands==5 || numHands==10 || numHands==25 || numHands==50",
                 "..\\Casino\\vpmstate.cpp",0x5d);
  }
  FUN_0056a7a0(param_2 + -1,0);
  uVar1 = FUN_0056a5d0();
  FUN_0056a7a0(uVar2,0);
  return uVar1;
}

