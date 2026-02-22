## NEW NAMING?:
- SoftLM
- RockLM
- EdgeLM
- 16bitLM <- Since there is already one that runs on [32 Bit Intel 486 DOS](https://yeokhengmeng.com/2025/04/llama2-llm-on-dos/)
- RetroLM
- VintageLM
- FixedLM
- FeatherLM
- FeatherLang
- LeanLang
- LiteLM


## Project Scope:

We want the possibilty of a LSTM OR GPT in the library.

So we want a library and language model designed to be super flexable, (do we allow pthreads? not originally for sure)?

Or do we just want a neural network for constrained environments.

## Targets:
- ELKS (16 bit)
- 6502 / C128? (8 bit!)
- Native (32-64 bit +)

## DESCISIONS:
- Lets use fixed point mathematics
- The runtime should target 16 and 8 bit fixed point math at least, possibly variable.

### for ELKS:
Make the makefiles strip the executables.

int 2 byte <- native 16 bit idk how longs are processed.

long 4 bytes.

We want to definetly allow for quantization and flaoting point OR integer mathematics. This allows training to be done on a float capable machine and then the runtime can use the same data quantized to an integer form.
Were limited to integer mathematics and a single thread. It seems an LSTM will be our best type for this. Our library should also allow for GPT type LM's though.
We also have very little memory so we may want to load and unload chunks at a time if required.
Activation is likely going to be done with ReLU.
Speed can be optimized using lookup tables for all kinds of stuff.
Okay so we are going to need tensors and their respective operations (multuply, etc)

FR_Math can do fixed point math for us but will increase the file size greatly and therefore our RAM usage. We may want to just implement our own fixed point math functions.
If we use LUT's we may not even need that.
