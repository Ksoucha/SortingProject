#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( )
{
	//Use ofGLFWWindowSettings for more options like multi-monitor fullscreen
	ofGLWindowSettings settings;
	settings.setSize(1024, 768);
	settings.windowMode = OF_WINDOW; //can also be OF_FULLSCREEN

	auto window = ofCreateWindow(settings);

	ofRunApp(window, make_shared<ofApp>());
	ofRunMainLoop();
}

void ofApp::bubbleSort(std::vector<int>& bubbleArray)
{
	for (int i = 0; i < bubbleArray.size(); i++)
	{
		for (int j = 0; j < bubbleArray.size() - i - 1; j++)
		{
			if (bubbleArray[j] > bubbleArray[j + 1])
			{
				std::swap(bubbleArray[j], bubbleArray[j + 1]);
			}
		}
	}
}

void ofApp::insertionSort(std::vector<int>& insertArray)
{
	for (int i = 1; i < insertArray.size(); i++) 
	{
		int key = insertArray[i];
		int j = i - 1;
		while (j >= 0 && insertArray[j] > key) 
		{
			insertArray[j + 1] = insertArray[j];
			j--;
		}
		insertArray[j + 1] = key;
	}
}

void merge(std::vector<int>& mergeArray, int left, int mid, int right)
{
	std::vector<int> temp;
	int i = left, j = mid + 1;
	while (i <= mid && j <= right) 
	{
		if (mergeArray[i] <= mergeArray[j]) temp.push_back(mergeArray[i++]);
		else temp.push_back(mergeArray[j++]);
	}
	while (i <= mid)
	{
		temp.push_back(mergeArray[i++]);
	}
	while (j <= right)
	{
		temp.push_back(mergeArray[j++]);
	}
	for (int k = 0; k < temp.size(); k++)
	{
		mergeArray[left + k] = temp[k];
	}
}

void ofApp::mergeSort(std::vector<int>& mergeArray, int left, int right)
{
	if (left < right) 
	{
		int mid = left + (right - left) / 2;
		mergeSort(mergeArray, left, mid);
		mergeSort(mergeArray, mid + 1, right);
		merge(mergeArray, left, mid, right);
	}
}

int partition(std::vector<int>& quickArray, int low, int high)
{
	int pivot = quickArray[high];
	int i = low - 1;
	for (int j = low; j < high; j++) 
	{
		if (quickArray[j] < pivot) 
		{
			i++;
			std::swap(quickArray[i], quickArray[j]);
		}
	}
	std::swap(quickArray[i + 1], quickArray[high]);
	return i + 1;
}

void ofApp::quickSort(std::vector<int>& quickArray, int low, int high)
{
	if (low < high) 
	{
		int p = partition(quickArray, low, high);
		quickSort(quickArray, low, p - 1);
		quickSort(quickArray, p + 1, high);
	}
}

void ofApp::fisherYatesShuffle(std::vector<int>& arrayShuffle)
{
	int n = arrayShuffle.size();
	std::random_device rd; 
	std::mt19937 rng(rd());

	for (int i = n - 1; i > 0; --i) 
	{
		std::uniform_int_distribution<int> dist(0, i);
		int j = dist(rng);
		std::swap(arrayShuffle[i], arrayShuffle[j]);
	}
}

