// GetMinSize  005d5de0

/* Library Function - Single Match
    public: virtual void __thiscall CPane::GetMinSize(class CSize &)const 
   
   Library: Visual Studio 2010 Debug */

void __thiscall CPane::GetMinSize(CPane *this,CSize *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x4c0);
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x4bc);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

