# Exponent Sharing in Generalized Matrix Multiplications
To reduce the memory requirement of neural network models, we proposed exponent sharing [[1]](#1) when weights are stored in a floating point precision. The concept is depicted in the following figure. With the proposed floating point storage method every float becomes a combination of sign, index and mantissa.

<img width="502" alt="Expo_sharing" src="https://github.com/prachikashikar/Exponent-Sharing-on-HLS-LeNet-/assets/55191185/70946523-e86f-4714-9a30-8e9cf3dead4c">

Matrix multiplications are at the core of neural networks. This repository contains the code of Generalized Matrix Multiplications (GEMMs) with and without exponent sharing. Any pre-trained model can benefit from exponent sharing in terms of storage requirements. The layerwise exponent sharing in a model saves the memory by at least 9% for no accuracy loss when weights are in IEEE Float32 format. One such example is shared [here](https://github.com/prachikashikar/Exponent-Sharing-on-HLS-LeNet-/tree/main).





## References
<a id="1">[1]</a> 
P. Kashikar, S. Sinha and A. K. Verma, "Exploiting Weight Statistics for Compressed Neural Network Implementation on Hardware," 2021 IEEE 3rd International Conference on Artificial Intelligence Circuits and Systems (AICAS), 2021, pp. 1-4, doi: 10.1109/AICAS51828.2021.9458581.
